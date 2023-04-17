import pandas as pd


# load and sort BCE/RAT files as dataframes
def load_file(filepath):
    df = pd.read_csv(filepath)
    df.sort_values(by=['movie_id'], inplace=True)
    return df


if __name__ == '__main__':
    dfAction = load_file('data/action.csv')
    dfAdventure = load_file('data/adventure.csv')
    dfCrime = load_file('data/crime.csv')
    dfFamily = load_file('data/family.csv')
    dfFantasy = load_file('data/fantasy.csv')
    dfNoir = load_file('data/film-noir.csv')
    dfHistory = load_file('data/history.csv')
    dfHorror = load_file('data/horror.csv')
    dfMystery = load_file('data/mystery.csv')
    dfSciFi = load_file('data/scifi.csv')
    dfSports = load_file('data/sports.csv')
    dfThriller = load_file('data/thriller.csv')
    dfWar = load_file('data/war.csv')

    uniques1 = pd.concat([dfAction, dfAdventure, dfCrime, dfFamily, dfFantasy, dfNoir])
    uniques2 = pd.concat([dfHistory, dfHorror, dfMystery, dfSciFi, dfSports, dfThriller, dfWar])
    uniques = pd.concat([uniques1, uniques2]).drop_duplicates(subset=['movie_id'], keep='first')

    writer = pd.ExcelWriter('data/movies.xlsx', engine='openpyxl')
    uniques.to_excel(writer, sheet_name="Movies", index=False)
    writer.close()

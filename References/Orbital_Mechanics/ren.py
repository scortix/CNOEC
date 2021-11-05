import os

def main():
    t = {'set': '09', 'ott': '10', 'nov': '11', 'dic': '12'}
    l = os.listdir() 
    for el in l:
        print(el)
        if 'Orbital' in el:
            d = el[26:28]
            m = el[23:25]
            a = '2020'
            new = el[:17] + ' ' + a + '-' + m + '-' + d + '.pdf'
            os.rename(el, new)

if __name__ == '__main__':
    main()

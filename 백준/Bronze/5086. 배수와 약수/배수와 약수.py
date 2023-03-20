while True:
    firstnum, secondnum = map(int, input().split())
    
    if firstnum == 0 and secondnum == 0:
        break
    
    if secondnum % firstnum == 0:
        print('factor')
    elif firstnum % secondnum == 0:
        print('multiple')
    else:
        print('neither')
    
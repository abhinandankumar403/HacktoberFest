import pandas as pd
import numpy as np
dp=pd.DataFrame()
#open_file=pd.read_csv('data (2).csv')
#print(open_file)

list=[1,2,3,4,6,None]
myvar=pd.Series(list)
print(myvar)
class_code={99:'physics',
            100:'english',
            101:'hindi',
            102:'history'}
ps=pd.Series(class_code)
students=[{'Name':'Alice',
           'Class':'Physics',
             'Score':85 },
          {'Name':'Helen',
           'Class':'Chemistry',
           'Score':96},
          {'Name':'Jack','Class':'English','Score':87}]
df=pd.DataFrame(students,index=['school1','school2','school1'])
print(df)
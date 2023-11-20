#Flowchart
1
```mermaid
  flowchart TD;
A([Start]) --> B[/Input height/];
B --> C[/Input weight/];
C --> D["BMI = weight / (height * height)"];
D --> E[/Print BMI/];
E --> F([End]);
```


2
```mermaid
  flowchart TD
A([Start]) --> B[/Read distancePerCapacity and capacity/];
B --> C["distance = capacity * distancePerCapacity"];
C --> D[/Print distance/];
D --> E([End]);
```


3
```mermaid
  flowchart TD
A([Start]) --> B[/Read letter/];
B --> C["Convert to lowercase using islower() function"];
C --> D["Convert to uppercase using isupper() function"];
D --> E[/Print outputs/];
E --> F([End]);
```


4
```mermaid
  flowchart TD
A([Start]) --> B[/Read weekly_working_hours, bonus_rate_per_hour, base_salary/];
B --> C["bonus_payment = weekly_working hours * bonus_rate_per_hour"];
C --> D["gross_salary = bonus_payment + base_salary"];
D --> E["net_salary = 0.8075 * gross_salary"];
E --> F[/Print gross_salary, bonus_payment and net_salary/];
F --> G([End]);
```

5
```mermaid
  flowchart TD
A([Start]) --> B[/Read x and y/];
B --> C["Use pow() function on them"];
C --> D[/Print result/];
D --> E([End]);
```


6
```mermaid
  flowchart TD
A([Start]) --> B[/Read file_size/];
B -6
```mermaid
  flowchart TD
A([Start]) --> B[/Read letter/];
B --> C["Convert to lowercase using islower() function"];
C --> D["Convert to uppercase using isupper() function"];
D --> E[/Print outputs/];
E --> F([End]);
```-> C["time_taken = file_size / byte_per_second"];
C --> D[/Print time_taken/];
D --> E([End]);
```







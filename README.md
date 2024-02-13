# Tucil 1 13522125 - Cyberpunk Breach Protocol

Cyberpunk 2077 Breach Protocol is a hacking minigame in the video game Cyberpunk 2077. This minigame is a simulation of local network hacking from ICE (Intrusion Countermeasures Electronics) in the game Cyberpunk 2077.

This program is using brute force method.

## Run Locally

Clone the project

```bash
  git clone https://github.com/satriadhikara/Tucil1_13522125.git
```

Go to the project directory

```bash
  cd Tucil1_13522125
```

Go to the src directory

```bash
  cd src
```

Make virtual environment

```bash
  virtual venv
```

Activate the virtual environment

```bash
  source venv/bin/Activate      # WSL / MacOS / Linux
  source venv/Scripts/activate  # Windows
```

Install dependencies

```bash
  pip install -r requirements.txt
```

Start the program

```bash
  python main.py
```

Deactivate the virtual environment

```bash
  deactivate
```

## Usage/Examples Input From File

```txt
7                 # buffer size
6 6               # matrix width and height
7A 55 E9 E9 1C 55 # matrix
55 7A 1C 7A E9 55
55 1C 1C 55 E9 BD
BD 1C 7A 1C 55 BD
BD 55 BD 7A 1C 1C
1C 55 55 7A 55 7A
3                 # number of sequences
BD E9 1C          # sequence token
15                # sequence reward
BD 7A BD
20
BD 1C BD 55
30
```

## Usage/Examples Input From Terminal

```bash
? Number of unique token?                 5
? Enter the tokens:                       7A 1C BD 55 E9
? Enter the buffer size:                  7
? Enter the matrix size (m x n):          6 6
? Enter the number of sequences:          3
? Enter the maximum size of the sequence: 4
```

## Authors

- [@satriadhikara](https://www.github.com/satriadhikara)

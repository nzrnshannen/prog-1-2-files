@ECHO OFF
PUSHD .
FOR /R %%d IN (.) DO (
cd "%%d"
IF EXIST *.cpp (
REN *.cpp *.c
)
)
POPD
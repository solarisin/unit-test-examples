<h1 align="center">Example Unit Tests</h1>

<p align="center">
    <img alt="GitHub Workflow Status" src="https://img.shields.io/github/workflow/status/solarisin/unit-test-examples/msbuild-vstest-ci?style=for-the-badge">
    <img alt="Test Results" src="https://camo.githubusercontent.com/973cf56817f1101f3640b3223bc822bf7b1995a20f893b784bee044def4170b5/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f74657374732d2545322539432539342532303125323025453225394325393625323030253230254532253945253946253230302d627269676874677265656e3f7374796c653d666f722d7468652d6261646765">
    <img alt="Conventional Commits" src="https://img.shields.io/badge/Conventional%20Commits-1.0.0-%23FE5196?logo=conventionalcommits&logoColor=white&style=for-the-badge">
    <img alt="GitHub" src="https://img.shields.io/github/license/solarisin/unit-test-examples?style=for-the-badge">
</p>

## Description

This project will serve as an example of different C++ unit testing frameworks and their integration into Github Actions and JetBrains TeamCity CI/CD.

#### Units

- simple-dll
- - As the name implies, a painfully simple implementation of a MSVC++ dll, class and function.

#### Tests

- ms-cpp-unit-test
- - Contains tests utilizing the Microsoft C++ Unit Test Framework, executed by VSTest.Console.exe.

#### Github Actions

- msbuild-vstest-ci
- - Utilizes msbuild and then microsoft/vstest-action to discover test .dlls. Then, trx-parser to retrieve the results from the trx file and create a check.

## Usage

Clone the repo and open the solution file in Visual Studio. Execute the tests using the Test Explorer, or from the command line using vstest.console.exe. Examples with JetBrains CLion will come soon.

## How to Contribute

Contributions are welcome, as long as they include examples on integrating the tests with a CI/CD pipeline. Please follow the [Contributor Covenant](https://www.contributor-covenant.org/).

<p align="center">
    <img src="https://github.com/acemod/ACE3/raw/master/extras/assets/logo/black/ACE3-Logo.jpg" width="480">
</p>

<p align="center">
    <a href="https://github.com/Gehock/addon-template-test/releases/latest">
        <img src="https://img.shields.io/badge/Version-1.0.0-blue.svg?style=flat-square" alt="ACE Project Template Version">
    </a>
    <a href="https://github.com/Gehock/addon-template-test/issues">
        <img src="https://img.shields.io/github/issues-raw/Gehock/addon-template-test.svg?style=flat-square&label=Issues" alt="ACE Project Template Issues">
    </a>
    <a href="https://github.com/Gehock/addon-template-test/releases">
        <img src="https://img.shields.io/github/downloads/Gehock/addon-template-test/total.svg?style=flat-square&label=Downloads" alt="ACE Project Template Downloads">
    </a>
    <a href="https://github.com/Gehock/addon-template-test/blob/master/LICENSE">
        <img src="https://img.shields.io/badge/License-MIT-red.svg?style=flat-square" alt="ACE Project Template License">
    </a>
</p>

<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.<br/></strong></sup>
</p>

# Addon Template Test

## Development Environment

See the [ACE3 documentation](https://ace3mod.com/wiki/development/setting-up-the-development-environment.html) on setting up your development environment.

## Versioning

You can also manage versioning through the make tool. To do this, navigate to the `addons/main` directory. In there, is a file called `script_mod.hpp`. This contains the following:

```sqf
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0
```

Modify the numbers in here to represent your build version. The example listed above would be: `1.0.0.0`. This version will be set in each pbo during binarizing. It will also be used in the signature file names, along the commit hash. This will make it easier to identify the exact version that is being used.


## Using CI

This template comes with some basic scripts to validate and enforce parts of the ACE3 coding guidelines. You can find those scripts in the tools directory.

- sqf_validator.py - checks all .sqf files in the addons directory and checks for missing brackets, missing semi-colons and tab usage.
- config_style_checker.py - checks all .hpp and .cpp files in the addons directory and checks for missing brackets and tabs.

For more information on the guidelines, see ACE3 coding guidelines.

You can use these scripts in combination with CI - if you are on GitHub and use Travis-CI, here is an example:

```yml
language: python
python:
- '3.4'
script:
- python3 tools/sqf_validator.py
- python3 tools/config_style_checker.py
```

## Adding new components

Adding a new component to your project is done by copying the example component directory and renaming it. Follow these steps:

- Copy the blank example component directory into the addons directory
- Rename the component directory name (blank -> {your component name})
- Do a search and replace of `blank` by `your component name`. Take care to preserve case sensitivity.
- Do a search and replace of `Blank` by `your component name`  in beautified form, like `Ace` with upper and lower casing. Take care to preserve case sensitivity at search.
- Ensure that the required AddOns in the `config.cpp` file inside your new component are set correctly. You will need at least a requirement to the main component of your project. Any other modifications that your component depends on will also need to be listed here, including your own components that you depend upon.
- Start work on your component.

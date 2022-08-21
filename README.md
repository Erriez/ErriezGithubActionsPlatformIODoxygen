[![Licence MIT](https://img.shields.io/badge/license-MIT-green)](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/blob/main/LICENSE)
[![Language C/C++](https://img.shields.io/badge/language-C%2FC%2B%2B-informational)](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen)
[![Release tag](https://img.shields.io/github/v/release/Erriez/ErriezGithubActionsPlatformIODoxygen?display_name=tag)](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/releases)
[![Open issue](https://shields.io/github/issues-raw/Erriez/ErriezGithubActionsPlatformIODoxygen)](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/issues)
[![PlatformIO CI](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/actions/workflows/actions.yml/badge.svg)](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/actions/workflows/actions.yml)

# Erriez Arduino Github Actions Template

This is a template repository for Erriez Arduino libraries to test Github Actions with PlatformIO and Doxygen.

## Files and Directories
* `src/`, `examples/`, `keywords.txt` and `library.properties`:
    - Minimum Arduino template library (doing nothing special).
* `Doxygen`:
    - Doxygen configuration file.
* `.auto-build.sh`:
    - Bash script to build Arduino libary with PlatformIO and Doxygen HTML/PDF on Linux.
* `.github/ISSUE_TEMPLATE/*.yaml`: 
    - [Github issue templates](https://docs.github.com/en/communities/using-templates-to-encourage-useful-issues-and-pull-requests/syntax-for-issue-forms) to enforce user to enter relevant information.
* `.github/PULL_REQUESTS_TEMPLATE.md`: 
    - [Github pull request template](https://docs.github.com/en/communities/using-templates-to-encourage-useful-issues-and-pull-requests/creating-a-pull-request-template-for-your-repository). Note: `yaml` format is not supported yet.
* `.github/worksflows/actions.yml`:
    - [Github Actions](https://docs.github.com/en/actions) to build Arduino library with PlatformIO and deploy Doxygen HTML to `gh-pages`.

## Github Project Configuration

- `Project Settings`:
    - `General`:
        - Check: `Issues`
    - `Actions | General`:
        - Customize for your needs
    - `Pages`:
        - Source: `Deploy from a branch`
        - Branch: `gh-pages`, `/ (root)`

Github documentation to configure permissions [secrets.GITHUB_TOKEN](https://docs.github.com/en/actions/security-guides/automatic-token-authentication#modifying-the-permissions-for-the-github_token).

## Generated Arduino Library Doxygen Documenation

* [Online Doxygen HTML](https://erriez.github.io/ErriezGithubActionsPlatformIODoxygen/index.html)
* [Doxygen PDF](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/blob/gh-pages/ErriezTemplateLibrary.pdf)

## MIT License

This project is published under [MIT license](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/blob/main/LICENSE)
with an additional end user agreement (next section).

## End User Agreement :ukraine:

End users shall accept the [End User Agreement](https://github.com/Erriez/ErriezGithubActionsPlatformIODoxygen/blob/main/END_USER_AGREEMENT.md)
holding export restrictions to Russia to stop the WAR before using this project.

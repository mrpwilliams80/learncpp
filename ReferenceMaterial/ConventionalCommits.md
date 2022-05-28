# Conventional Commits

## Structure

Under Convential Commits a commit message follows the basic structure: 

```
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]
```

## Types

- **FIX**: A commit of the type fix patches a bug in your codebase (this correlates with *PATCH* in Semantic Versioning)
- **FEAT**: A commit of the type feat introduces a new feature to the codebase (this correlates with *MINOR* in Semantic Versioning).
- **DOCS**: A commit that only changes documentation
- **PERF**: A commit with code changes that improves performance
- **REFACTOR**: A commit with code changes that neither fixes a bug nor adds a feature
- **STYLE**: A commit with changes that do not affect the meaning of the code (white-space, formatting, missing semi-colons, etc)
- **TEST**: A commit that adds missing tests or corrects an existing test
- **CHORE**: A commit with other changes that don't modify src or test files
- **REVERT**: Reverts a previous commit

## Breaking Change

- **BREAKING CHANGE**: a commit that has a footer BREAKING CHANGE:, or appends a ! after the type/scope, introduces a breaking API change (correlating with *MAJOR* in Semantic Versioning). A BREAKING CHANGE can be part of commits of any type.

---

### Specification
1. Commits MUST be prefixed with a type, which consists of a noun, feat, fix, etc., followed by the OPTIONAL scope, OPTIONAL !, and REQUIRED terminal colon and space.
2. The type feat MUST be used when a commit adds a new feature to your application or library.
3. The type fix MUST be used when a commit represents a bug fix for your application.
4. A scope MAY be provided after a type. A scope MUST consist of a noun describing a section of the codebase surrounded by parenthesis, e.g., fix(parser):
5. A description MUST immediately follow the colon and space after the type/scope prefix. The description is a short summary of the code changes, e.g., fix: array parsing issue when multiple spaces were contained in string.
6. A longer commit body MAY be provided after the short description, providing additional contextual information about the code changes. The body MUST begin one blank line after the description.
7. A commit body is free-form and MAY consist of any number of newline separated paragraphs.
8. One or more footers MAY be provided one blank line after the body. Each footer MUST consist of a word token, followed by either a <code>:<space></code> or <code><space>#</code> separator, followed by a string value (this is inspired by the git trailer convention).
9. A footer’s token MUST use - in place of whitespace characters, e.g., Acked-by (this helps differentiate the footer section from a multi-paragraph body). An exception is made for BREAKING CHANGE, which MAY also be used as a token.
10. A footer’s value MAY contain spaces and newlines, and parsing MUST terminate when the next valid footer token/separator pair is observed.
11. Breaking changes MUST be indicated in the type/scope prefix of a commit, or as an entry in the footer.
12. If included as a footer, a breaking change MUST consist of the uppercase text BREAKING CHANGE, followed by a colon, space, and description, e.g., BREAKING CHANGE: environment variables now take precedence over config files.
13. If included in the type/scope prefix, breaking changes MUST be indicated by a ! immediately before the :. If ! is used, BREAKING CHANGE: MAY be omitted from the footer section, and the commit description SHALL be used to describe the breaking change.
14. Types other than feat and fix MAY be used in your commit messages, e.g., docs: updated ref docs.
15. The units of information that make up Conventional Commits MUST NOT be treated as case sensitive by implementers, with the exception of BREAKING CHANGE which MUST be uppercase.
16. BREAKING-CHANGE MUST be synonymous with BREAKING CHANGE, when used as a token in a footer.
---
#### About
reproduced from freely available material at [conventionalcommits.org](https://www.conventionalcommits.org/en/v1.0.0/) for use as personal reference material. The Conventional Commit specification licenced under [Creative Commons ― CC BY 3.0](https://creativecommons.org/licenses/by/3.0/). Additional tools and information are available as part of the [Conventional Commits github repo](https://github.com/conventional-commits).
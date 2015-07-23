; hidden_catalog make file for local development

core = "7.x"
api = "2"

; include the d.o. profile base
includes[core] = drupal-org-core.make

; Profile
projects[hidden_catalog][type] = profile
projects[hidden_catalog][download][type] = git
projects[hidden_catalog][download][url] = git@github.com:theodorosploumis/hidden-catalog.git
projects[hidden_catalog][download][branch] = 7.x-1.x


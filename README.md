# Hidden Catalog
This is the installation profile for the Drupal distribution "Hidden Catalog".


## About
*Hidden Catalog* is a tiny Drupal 7.x distribution that creates a hidden (from the public as also as search engines) website and nothing more.

For example, you may need a product catalog that will be only accessible from partners and customers and no else.


## Basic modules

This distribution is mainly based on these contrib modules:

- [protected_pages](https://drupal.org/project/protected_pages)
- [views_selective_filters](https://drupal.org/project/views_selective_filters)
- [profiler_builder](https://drupal.org/project/profiler_builder)


## Basic themes

The frontend theme (*hideio*) is based on [teka](https://drupal.org/project/teka) theme.

For the admin pages we use [adminimal_theme](https://drupal.org/project/adminimal_theme).


## Installation with Drush

``` bash
git clone --branch 7.x-1.x git@github.com:theodorosploumis/hidden-catalog.git
cd hidden-catalog
drush make --prepare-install build-hidden_catalog.make webroot
cd webroot
drush site-install hidden_catalog --db-url="mysql://DBUSER:DBPASS@localhost/DBNAME"
```


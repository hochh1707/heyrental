CONTENTS
--------
* Version
* Introduction
* User stories
* Requirements
* Submodules
* Installation
* Configuration
* Future development (roadmap)
* Maintainers
* List of files in hellofixit_sms
* Functions, classes, and methods


VERSION
-------
1.2 - June 2, 2016


INTRODUCTION
------------
Heyrental is a Drupal 7 module you can use to build a web application to manage 
rental properties. The main feature allow you to automate some of the common 
things that make life difficult for property managers and owners.


FEATURES / USER STORIES
-----------------------
* Property managers can enter their properties/tenants/leases in the system

* Property managers can send "rent due" messages escalating from 1 to 3 to tenants.
  They do this by bringing up the page for Rent Due 1, Rent Due 2, etc. and clicking
  the send button next to each lease.


REQUIREMENTS
------------
Heyrental was built on Drupal 7.41. Please see the dependancies list below. 

@todo review list of dependancies

Address Field
https://www.drupal.org/project/addressfield

Chaos tools
https://www.drupal.org/project/ctools

Date
Date API
https://www.drupal.org/project/date

Editable Views
https://www.drupal.org/project/editableviews

Entity API
https://www.drupal.org/project/entity

Entity Reference
https://www.drupal.org/project/entityreference

Features
https://www.drupal.org/project/features

Imagecache External
https://www.drupal.org/project/imagecache_external

Libraries
https://www.drupal.org/project/libraries

Phone
https://www.drupal.org/project/phone

Rules
https://www.drupal.org/project/rules

Twilio
https://www.drupal.org/project/twilio

Universally Unique ID
https://www.drupal.org/project/uuid

UUID Features (enabled)
https://www.drupal.org/project/uuid_features

Views
https://www.drupal.org/project/views

Note that for Twilio you will need to setup an account first with a phone number 
for SMS and MMS service. Twilio also requires its library to be installed and 
it needs to be configured with API keys. You will also need shell access on your 
webhost to setup the cron job.


SUBMODULES
----------
* HRC (Heyrental collections)
Send sms messages to your tenants to remind them to pay rent


INSTALLATION
------------
1. On a Drupal 7 installation, copy the Heyrental folder to the /sites/all/modules/custom folder
2. Copy all the required contrib modules to /sites/all/modules/contrib
3. Activate the Heyrental module (this will automatically take care of the submodules and dependancies)
4. Place the Twilio library from /hellofixit/lib in /sites/all/libraries


CONFIGURATION AND TESTING
-------------------------
1. Configure Twilio with API keys and your Twilio phone number
2. Send a test SMS to yourself from the Twilio module
3. Refresh Drupal cache
4. Enter your website address in the HRC settings
5. Enter your admin phone number (must be able to receive text messages)
6. Add the blocks (Collect rent and View my...) to the content region on 
   the site's front page
7. Check to make sure the Views are installed (my properties, my rent due messages
   property, rent due)
8. Check to make sure the rule "heyrental outgoing" is installed and enabled
9. Create a new user with role manager or do the next steps as user 1
10. Go to My properties -> Click here to enter a new property
11. Enter a new property/tenant/lease
12. Go to Rent due 1 (or 2 or 3) and click to send to your tenant. If the 
    message succeeds, the button  will turn blue, if not, it will turn black
13. Go to My rent due messages to see if the message is there


FUTURE DEVELOPMENT ROADMAP
--------------------------

* Bugs and fixes
Edit js file so it doesn't say hey7
Test on live
Add data validation to new property form
JS for title field of Rent due 1,2,3 view should only affect that view (not My rent due messages)
Theme rent due messages view so that whole row is clickable
Theme properties view so that whole row is clickable
Theme add new property and tenant on properties view
Add "add property" to My properties menu
Theming for mobile
Theming for Property view <div style="visibility: hidden;" class="views-row-edit-static">

* Additional features
Receive messages from tenants that they paid rent
Receive messages from tenants for maint requests
Vacate notices (PDF, and image)
Rent increase messages
Notify local manager to file eviction
User can set text of rent due messages
Form for tenant applications
View to see rent received and enter rent paid
JS on property view to save without page refresh
Button to unassign customer on Property view (and enter new one)


MAINTAINERS
-----------

David Hochhaus
https://www.drupal.org/u/davehochh
https://github.com/hochh1707
http://www.hochh.com/
Twitter: hochh1707


LIST OF FILES IN HRC
--------------------
@todo


FUNCTIONS, CLASSES, AND METHODS
-------------------------------
@todo


MAKING OF HEYRENTAL VIDEOS
--------------------------

1. Theming a view (rent due) to make a button
2. Drupal hook menu used to make a node (rent due nodes)
3. Custom access callbacks with hook menu
4. Using Features to make a setup module
5. Modifying Features in code
6. Jquery get to call a menu callback and get a response
7. Using Devel module to help create a node in code
8. Drupal Sql queries in your custom module
9. Heyrental demo
10. Getting taxonomy terms in code
11. Settings for your custom module


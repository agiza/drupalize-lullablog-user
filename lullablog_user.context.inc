<?php
/**
 * @file
 * lullablog_user.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function lullablog_user_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lullablog_author_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-lullablog_recent-block' => array(
          'module' => 'views',
          'delta' => 'lullablog_recent-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['lullablog_author_context'] = $context;

  return $export;
}

<?php
/**
 * @file
 * kln_main_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kln_main_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection Anonymous';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_anonymous';
  $fe_block_boxes->body = '<a href="/islandora"><i title="bookmark" class="icon-plus islandora-display-list-icon"></i> Submit to a collection</a>';

  $export['submit_to_collection_anonymous'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_box';
  $fe_block_boxes->body = '<a href="/islandora-guided-ingest"><i title="bookmark" class="icon-plus islandora-display-list-icon"></i> Submit to a collection</a>';

  $export['submit_to_collection_box'] = $fe_block_boxes;

  return $export;
}

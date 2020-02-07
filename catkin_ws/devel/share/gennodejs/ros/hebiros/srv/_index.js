
"use strict";

let SendCommandWithAcknowledgementSrv = require('./SendCommandWithAcknowledgementSrv.js')
let AddModelFromURDFSrv = require('./AddModelFromURDFSrv.js')
let ModelFkSrv = require('./ModelFkSrv.js')
let EntryListSrv = require('./EntryListSrv.js')
let AddGroupFromURDFSrv = require('./AddGroupFromURDFSrv.js')
let SetCommandLifetimeSrv = require('./SetCommandLifetimeSrv.js')
let SetFeedbackFrequencySrv = require('./SetFeedbackFrequencySrv.js')
let SizeSrv = require('./SizeSrv.js')
let AddGroupFromNamesSrv = require('./AddGroupFromNamesSrv.js')

module.exports = {
  SendCommandWithAcknowledgementSrv: SendCommandWithAcknowledgementSrv,
  AddModelFromURDFSrv: AddModelFromURDFSrv,
  ModelFkSrv: ModelFkSrv,
  EntryListSrv: EntryListSrv,
  AddGroupFromURDFSrv: AddGroupFromURDFSrv,
  SetCommandLifetimeSrv: SetCommandLifetimeSrv,
  SetFeedbackFrequencySrv: SetFeedbackFrequencySrv,
  SizeSrv: SizeSrv,
  AddGroupFromNamesSrv: AddGroupFromNamesSrv,
};

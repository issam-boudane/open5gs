ies = []
ies.append({ "ie_value" : "IMSI", "presence" : "Conditional", "reference" : "7.7.2"})
ies.append({ "ie_value" : "Routeing Area Identity", "presence" : "Optional", "reference" : "7.7.3"})
ies.append({ "ie_value" : "Recovery", "presence" : "Optional", "reference" : "7.7.11"})
ies.append({ "ie_value" : "Selection mode", "presence" : "Conditional", "reference" : "7.7.12"})
ies.append({ "ie_value" : "Tunnel Endpoint Identifier Data I", "presence" : "Mandatory", "reference" : "7.7.13"})
ies.append({ "ie_value" : "Tunnel Endpoint Identifier Control Plane", "presence" : "Conditional", "reference" : "7.7.14"})
ies.append({ "ie_value" : "NSAPI", "presence" : "Mandatory", "reference" : "7.7.17"})
ies.append({ "ie_value" : "Linked NSAPI", "presence" : "Conditional", "reference" : "7.7.17"})
ies.append({ "ie_value" : "Charging Characteristics", "presence" : "Conditional", "reference" : "7.7.23"})
ies.append({ "ie_value" : "Trace Reference", "presence" : "Optional", "reference" : "7.7.24"})
ies.append({ "ie_value" : "Trace Type", "presence" : "Optional", "reference" : "7.7.25"})
ies.append({ "ie_value" : "End User Address", "presence" : "Conditional", "reference" : "7.7.27"})
ies.append({ "ie_value" : "Access Point Name", "presence" : "Conditional", "reference" : "7.7.30"})
ies.append({ "ie_value" : "Protocol Configuration Options", "presence" : "Optional", "reference" : "7.7.31"})
ies.append({ "ie_value" : "SGSN Address for signalling", "presence" : "Mandatory", "reference" : "7.7.32"})
ies.append({ "ie_value" : "SGSN Address for user traffic", "presence" : "Mandatory", "reference" : "7.7.32"})
ies.append({ "ie_value" : "MSISDN", "presence" : "Conditional", "reference" : "7.7.33"})
ies.append({ "ie_value" : "Quality of Service Profile", "presence" : "Mandatory", "reference" : "7.7.34"})
ies.append({ "ie_value" : "TFT", "presence" : "Conditional", "reference" : "7.7.36"})
ies.append({ "ie_value" : "Trigger Id", "presence" : "Optional", "reference" : "7.7.41"})
ies.append({ "ie_value" : "OMC Identity", "presence" : "Optional", "reference" : "7.7.42"})
ies.append({ "ie_value" : "Common Flags", "presence" : "Optional", "reference" : "7.7.48"})
ies.append({ "ie_value" : "APN Restriction", "presence" : "Optional", "reference" : "7.7.49"})
ies.append({ "ie_value" : "RAT Type", "presence" : "Optional", "reference" : "7.7.50"})
ies.append({ "ie_value" : "User Location Information", "presence" : "Optional", "reference" : "7.7.51"})
ies.append({ "ie_value" : "MS Time Zone", "presence" : "Optional", "reference" : "7.7.52"})
ies.append({ "ie_value" : "IMEI", "presence" : "Conditional", "reference" : "7.7.53"})
ies.append({ "ie_value" : "CAMEL Charging Information Container", "presence" : "Optional", "reference" : "7.7.54"})
ies.append({ "ie_value" : "Additional Trace Info", "presence" : "Optional", "reference" : "7.7.62"})
ies.append({ "ie_value" : "Correlation-ID", "presence" : "Optional", "reference" : "7.7.82"})
ies.append({ "ie_value" : "Evolved Allocation/Retention Priority I", "presence" : "Optional", "reference" : "7.7.91"})
ies.append({ "ie_value" : "Extended Common Flags", "presence" : "Optional", "reference" : "7.7.93"})
ies.append({ "ie_value" : "User CSG Information", "presence" : "Optional", "reference" : "7.7.94"})
ies.append({ "ie_value" : "APN-AMBR", "presence" : "Optional", "reference" : "7.7.98"})
ies.append({ "ie_value" : "Signalling Priority Indication", "presence" : "Optional", "reference" : "7.7.103"})
ies.append({ "ie_value" : "CN Operator Selection Entity", "presence" : "Optional", "reference" : "7.7.116"})
ies.append({ "ie_value" : "Mapped UE Usage Type", "presence" : "Optional", "reference" : "7.7.123"})
ies.append({ "ie_value" : "UP Function Selection Indication Flags", "presence" : "Optional", "reference" : "7.7.124"})
msg_list[key]["ies"] = ies

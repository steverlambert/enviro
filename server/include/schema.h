#ifndef __ENVIRO_SCHEMA__H
#define __ENVIRO_SCHEMA__H 

#include "enviro.h"

using nlohmann::json; 

inline json ENVIRO_CONFIG_SCHEMA = R"(
    {
        "name": "",
        "ip": "",
        "port": 0,
        "agents": [
            {
                "definition": "",
                "style": { "stroke": "", "fill": "" },
                "position": {
                    "x": 0, 
                    "y": 0, 
                    "theta": 0
                }
            }
        ],
        "references": [
            {
                "definition": "",
                "style": { "stroke": "", "fill": "" },
                "position": {
                    "x": 0, 
                    "y": 0, 
                    "theta": 0
                }
            }     
        ],
        "invisibles": [
            {
                "definition": ""
            }
        ],        
        "statics": [
            {
                "style": { "stroke": "", "fill": "" },
                "shape": [
                    { "x": 0, "y": 0 }
                ]
            }
        ]
    }
)"_json;

inline json ENVIRO_AGENT_SCHEMA = R"(
    {
        "name": "",
        "type": "",
        "description": "",
        "shape": [
            { "x": 0, "y": 0 }
        ],
        "friction": {
            "collision": 0,
            "linear": 0,
            "rotational": 0
        },
        "sensors": [
            {
                "location": { "x": 0, "y": 0 },
                "direction": 0
            }
        ],
        "mass": 0,    
        "controller": ""
    }
)"_json;

inline json ENVIRO_OMNI_AGENT_SCHEMA = R"(
    {
        "name": "",
        "type": "",
        "description": "",
        "shape": "",
        "radius": 0,
        "friction": {
            "collision": 0,
            "linear": 0,
            "rotational": 0
        },
        "sensors": [
            {
                "location": { "x": 0, "y": 0 },
                "direction": 0
            }
        ],
        "mass": 0,    
        "controller": ""
    }
)"_json;

inline json ENVIRO_NONINTERACTIVE_SCHEMA = R"(
    {
        "name": "",
        "type": "",
        "description": "",
        "shape": [
            { "x": 0, "y": 0 }
        ],
        "sensors": [
            {
                "location": { "x": 0, "y": 0 },
                "direction": 0
            }
        ], 
        "controller": ""
    }
)"_json;

inline json ENVIRO_INVISIBLE_SCHEMA = R"(
    {
        "name": "",
        "type": "",
        "description": "",
        "controller": ""
    }
)"_json;

#endif
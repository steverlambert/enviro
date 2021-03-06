#include "agent_interface.h"

#define ASSERT_AGENT_EXISTS(__name__) \
  if ( agent == NULL ) { \
      std::string msg = std::string("Agent pointer is null in call to ") \
                      + __name__ + "(). " \
                      + "Agent interface may have been used before call to add_process"; \
      throw Exception(msg); \
} 

// Global
void AgentInterface::center(double x, double y) {
  ASSERT_AGENT_EXISTS("center");
  agent->get_world_ptr()->set_center(x,y);
}

void AgentInterface::zoom(double z) {
  ASSERT_AGENT_EXISTS("zoom");
  agent->get_world_ptr()->set_zoom(z);
}

// State
int AgentInterface::id() {
  ASSERT_AGENT_EXISTS("id");
  return agent->get_id();
}

cpVect AgentInterface::position() {
  ASSERT_AGENT_EXISTS("position");
  return agent->position();
}

double AgentInterface::x() {
  ASSERT_AGENT_EXISTS("x");
  return agent->x();
}

double AgentInterface::y() {
  ASSERT_AGENT_EXISTS("y");
  return agent->y();
}

cpVect AgentInterface::velocity() {
  ASSERT_AGENT_EXISTS("velocity");
  return agent->velocity();
}

double AgentInterface::vx() {
  ASSERT_AGENT_EXISTS("vx");
  return agent->vx();
}

double AgentInterface::vy() {
  ASSERT_AGENT_EXISTS("vy");
  return agent->vy();
}

double AgentInterface::angle() {
  ASSERT_AGENT_EXISTS("angle");
  return agent->angle();
}

double AgentInterface::angular_velocity() {
  ASSERT_AGENT_EXISTS("angular_velocity");
  return agent->angular_velocity();
}

// Actuators

void AgentInterface::omni_apply_force(double fx, double fy) {
    ASSERT_AGENT_EXISTS("omni_apply_force");
    agent->omni_apply_force(fx, fy);  
}

void AgentInterface::apply_force(double thrust, double torque) {
    ASSERT_AGENT_EXISTS("apply_force");
    agent->apply_force(thrust, torque);
}

void AgentInterface::track_velocity(double linear_velocity, double angular_velocity,
                                    double kL, double kR) {
    ASSERT_AGENT_EXISTS("track_velocity");
    agent->track_velocity(linear_velocity, angular_velocity, kL, kR);
}

void AgentInterface::omni_track_velocity(double vx, double vy, double k) {
    ASSERT_AGENT_EXISTS("omni_track_velocity");
    agent->omni_track_velocity(vx, vy, k);
}

void AgentInterface::damp_movement() {
    ASSERT_AGENT_EXISTS("damp_movement");
    agent->damp_movement();
}   

void AgentInterface::omni_damp_movement() {
    ASSERT_AGENT_EXISTS("omni_damp_movement");
    agent->omni_damp_movement();
}   

void AgentInterface::teleport(double x, double y, double theta) {
    ASSERT_AGENT_EXISTS("teleport");
    agent->teleport(x,y,theta);
}   

void AgentInterface::move_toward(double x, double y, double vF, double vR) {
    ASSERT_AGENT_EXISTS("move_toward");
    agent->move_toward(x,y,vF,vR);  
}

void AgentInterface::omni_move_toward(double x, double y, double v) {
    ASSERT_AGENT_EXISTS("omni_move_toward");
    agent->omni_move_toward(x,y,v);
}

// Sensors
double AgentInterface::sensor_value(int index) {
    ASSERT_AGENT_EXISTS("sensor_value");
    return agent->sensor_value(index);
}

std::vector<double> AgentInterface::sensor_values() {
    ASSERT_AGENT_EXISTS("sensor_values");
    return agent->sensor_values();
}    

std::string AgentInterface::sensor_reflection_type(int index) {
    ASSERT_AGENT_EXISTS("sensor_reflection_type");
    return agent->sensor_reflection_type(index);
}

std::vector<std::string> AgentInterface::sensor_reflection_types() {
    ASSERT_AGENT_EXISTS("sensor_reflection_types");
    return agent->sensor_reflection_types();
}     

// Collisions
void AgentInterface::notice_collisions_with(const std::string agent_type, std::function<void(Event&)> handler) {
    ASSERT_AGENT_EXISTS("notice_collisions_with");
    agent->notice_collisions_with(agent_type, handler);  
}

void AgentInterface::ignore_collisions_with(const std::string agent_type) {
    ASSERT_AGENT_EXISTS("ignore_collisions_with");
    agent->ignore_collisions_with(agent_type);  
}

// Constraints
Agent& AgentInterface::find_agent(int id) {
    ASSERT_AGENT_EXISTS("find_agent");
    return agent->find_agent(id);
}

void AgentInterface::attach_to(Agent &other_agent) {
    ASSERT_AGENT_EXISTS("attach_to");
    agent->attach_to(other_agent);  
}

void AgentInterface::prevent_rotation() {
    ASSERT_AGENT_EXISTS("prevent_rotation");
    agent->prevent_rotation();  
}

void AgentInterface::allow_rotation() {
    ASSERT_AGENT_EXISTS("allow_rotation");
    agent->allow_rotation();  
}

// Agent Management
void AgentInterface::remove_agent(int id) {
    ASSERT_AGENT_EXISTS("remove_agent");
    agent->remove_agent(id);    
}

bool AgentInterface::agent_exists(int id) {
    ASSERT_AGENT_EXISTS("agent_exists");
    return agent->agent_exists(id);      
}

Agent& AgentInterface::add_agent(const std::string name, double x, double y, double theta, const json style) {
    ASSERT_AGENT_EXISTS("add_agent");
    return agent->add_agent(name, x, y, theta, style); 
}

void AgentInterface::set_client_id(std::string str) {
    ASSERT_AGENT_EXISTS("set_client_id");
    agent->set_client_id(str); 
}

std::string AgentInterface::get_client_id() {
    ASSERT_AGENT_EXISTS("get_client_id");
    return agent->get_client_id(); 
}

// Style
void AgentInterface::set_style(json style) {
    ASSERT_AGENT_EXISTS("set_style");
    agent->set_style(style);    
}

void AgentInterface::decorate(const std::string svg) {
    ASSERT_AGENT_EXISTS("decorate");
    agent->decorate(svg);     
}

void AgentInterface::label(const string str, double x, double y ) {
    ASSERT_AGENT_EXISTS("label");
    agent->label(str, x, y);     
}

void AgentInterface::clear_label() {
    ASSERT_AGENT_EXISTS("clear_label");
    agent->clear_label();       
}
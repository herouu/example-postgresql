//
// Created by 22696 on 2021/6/8.
//

#ifndef EXAMPLE_POSTGRESQL_ROLESERVICE_HPP
#define EXAMPLE_POSTGRESQL_ROLESERVICE_HPP


#include <oatpp/web/protocol/http/Http.hpp>
#include <db/RoleDb.hpp>
#include "oatpp/core/macro/component.hpp"
#include "oatpp/orm/DbClient.hpp"

class RoleService {
private:
    typedef oatpp::web::protocol::http::Status Status;
private:
    OATPP_COMPONENT(std::shared_ptr<RoleDb>, m_database); // Inject database component
public:

    oatpp::Object<RoleDto> getRoles();


};


#endif //EXAMPLE_POSTGRESQL_ROLESERVICE_HPP

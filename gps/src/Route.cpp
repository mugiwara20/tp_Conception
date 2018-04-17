#include "Route.hpp"

bool Route::operator==(const Route & r) const {

  villeA_=r.VilleA_;
  villeB_=r.villeB_;
  
  return (villeA_==ville_B)

}

bool Route::operator!=(const Route & r) const {

    // TODO

    return false;
}


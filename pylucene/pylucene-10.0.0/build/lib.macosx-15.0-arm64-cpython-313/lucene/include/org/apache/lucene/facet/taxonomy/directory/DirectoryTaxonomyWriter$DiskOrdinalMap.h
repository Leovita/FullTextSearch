#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$DiskOrdinalMap_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {

            class DirectoryTaxonomyWriter$DiskOrdinalMap : public ::java::lang::Object {
             public:
              enum {
                mid_init$_8a3244428bfc77b8,
                mid_addDone_3720c61b0679eb3e,
                mid_addMapping_e13cff512ebda969,
                mid_getMap_623cd4a044ba647a,
                mid_setSize_540b2b23d51b1efd,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter$DiskOrdinalMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter$DiskOrdinalMap(const DirectoryTaxonomyWriter$DiskOrdinalMap& obj) : ::java::lang::Object(obj) {}

              DirectoryTaxonomyWriter$DiskOrdinalMap(const ::java::nio::file::Path &);

              void addDone() const;
              void addMapping(jint, jint) const;
              JArray< jint > getMap() const;
              void setSize(jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter$DiskOrdinalMap);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter$DiskOrdinalMap);

            class t_DirectoryTaxonomyWriter$DiskOrdinalMap {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter$DiskOrdinalMap object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter$DiskOrdinalMap&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif

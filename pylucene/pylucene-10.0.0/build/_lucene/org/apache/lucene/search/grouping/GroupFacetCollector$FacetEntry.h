#ifndef org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H
#define org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupFacetCollector$FacetEntry : public ::java::lang::Record {
           public:
            enum {
              mid_init$_86aec93bf51df65e,
              mid_count_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_value_adbedbc1fa61c358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector$FacetEntry(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector$FacetEntry(const GroupFacetCollector$FacetEntry& obj) : ::java::lang::Record(obj) {}

            GroupFacetCollector$FacetEntry(const ::org::apache::lucene::util::BytesRef &, jint);

            jint count() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::util::BytesRef value() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector$FacetEntry);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector$FacetEntry);

          class t_GroupFacetCollector$FacetEntry {
          public:
            PyObject_HEAD
            GroupFacetCollector$FacetEntry object;
            static PyObject *wrap_Object(const GroupFacetCollector$FacetEntry&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

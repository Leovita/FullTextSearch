#ifndef org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H
#define org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
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
              mid_init$_be93bdc4fbbb5027,
              mid_count_20fbf7565993c3d7,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_value_9740fddd1c7df148,
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

#ifndef org_apache_lucene_search_Scorable$ChildScorable_H
#define org_apache_lucene_search_Scorable$ChildScorable_H

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
      namespace search {
        class Scorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Scorable$ChildScorable : public ::java::lang::Record {
         public:
          enum {
            mid_init$_14ba62066ad2f2d7,
            mid_child_fa03b31d2bca0a3b,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_relationship_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorable$ChildScorable(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorable$ChildScorable(const Scorable$ChildScorable& obj) : ::java::lang::Record(obj) {}

          Scorable$ChildScorable(const ::org::apache::lucene::search::Scorable &, const ::java::lang::String &);

          ::org::apache::lucene::search::Scorable child() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String relationship() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(Scorable$ChildScorable);
        extern PyTypeObject *PY_TYPE(Scorable$ChildScorable);

        class t_Scorable$ChildScorable {
        public:
          PyObject_HEAD
          Scorable$ChildScorable object;
          static PyObject *wrap_Object(const Scorable$ChildScorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

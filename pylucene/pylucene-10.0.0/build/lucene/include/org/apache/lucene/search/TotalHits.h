#ifndef org_apache_lucene_search_TotalHits_H
#define org_apache_lucene_search_TotalHits_H

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
        class TotalHits$Relation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHits : public ::java::lang::Record {
         public:
          enum {
            mid_init$_7457e6d5407600fc,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_relation_867cb7effec6dcb4,
            mid_toString_09a7afff1868fc5e,
            mid_value_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHits(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHits(const TotalHits& obj) : ::java::lang::Record(obj) {}

          TotalHits(jlong, const ::org::apache::lucene::search::TotalHits$Relation &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::TotalHits$Relation relation() const;
          ::java::lang::String toString() const;
          jlong value() const;
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
        extern PyType_Def PY_TYPE_DEF(TotalHits);
        extern PyTypeObject *PY_TYPE(TotalHits);

        class t_TotalHits {
        public:
          PyObject_HEAD
          TotalHits object;
          static PyObject *wrap_Object(const TotalHits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

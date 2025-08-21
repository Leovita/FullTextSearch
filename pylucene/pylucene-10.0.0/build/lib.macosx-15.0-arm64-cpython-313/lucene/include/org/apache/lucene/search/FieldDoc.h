#ifndef org_apache_lucene_search_FieldDoc_H
#define org_apache_lucene_search_FieldDoc_H

#include "org/apache/lucene/search/ScoreDoc.h"

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

        class FieldDoc : public ::org::apache::lucene::search::ScoreDoc {
         public:
          enum {
            mid_init$_06e0b8d4c1d7906b,
            mid_init$_8b4e3b98446c653f,
            mid_init$_c09c1a7e42fedbf5,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          enum {
            fid_fields,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDoc(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDoc(const FieldDoc& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

          JArray< ::java::lang::Object > _get_fields() const;
          void _set_fields(const JArray< ::java::lang::Object > &) const;

          FieldDoc(jint, jfloat);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &);
          FieldDoc(jint, jfloat, const JArray< ::java::lang::Object > &, jint);

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
        extern PyType_Def PY_TYPE_DEF(FieldDoc);
        extern PyTypeObject *PY_TYPE(FieldDoc);

        class t_FieldDoc {
        public:
          PyObject_HEAD
          FieldDoc object;
          static PyObject *wrap_Object(const FieldDoc&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

#ifndef org_apache_lucene_facet_LabelAndValue_H
#define org_apache_lucene_facet_LabelAndValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class LabelAndValue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2510e438a698e588,
            mid_init$_aeecff622bb9a200,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_count,
            fid_label,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LabelAndValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LabelAndValue(const LabelAndValue& obj) : ::java::lang::Object(obj) {}

          jint _get_count() const;
          ::java::lang::String _get_label() const;
          ::java::lang::Number _get_value() const;

          LabelAndValue(const ::java::lang::String &, const ::java::lang::Number &);
          LabelAndValue(const ::java::lang::String &, const ::java::lang::Number &, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(LabelAndValue);
        extern PyTypeObject *PY_TYPE(LabelAndValue);

        class t_LabelAndValue {
        public:
          PyObject_HEAD
          LabelAndValue object;
          static PyObject *wrap_Object(const LabelAndValue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

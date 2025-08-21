#ifndef org_apache_lucene_monitor_TermWeightor_H
#define org_apache_lucene_monitor_TermWeightor_H

#include "java/util/function/ToDoubleFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
      }
      namespace monitor {
        class TermWeightor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class TermWeightor : public ::java::util::function::ToDoubleFunction {
         public:
          enum {
            mid_combine_ef0a82072acc9fae,
            mid_fieldWeightor_7c331c6011754dd9,
            mid_fieldWeightor_0ed41345557a724f,
            mid_lengthWeightor_615c0d105ec0c24f,
            mid_termAndFieldWeightor_a18f9bc7da1b83b7,
            mid_termAndFieldWeightor_0ed41345557a724f,
            mid_termFreqWeightor_0236d805b1203a96,
            mid_termWeightor_d21dc3bb1ac040de,
            mid_termWeightor_0ed41345557a724f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermWeightor(jobject obj) : ::java::util::function::ToDoubleFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermWeightor(const TermWeightor& obj) : ::java::util::function::ToDoubleFunction(obj) {}

          static TermWeightor *DEFAULT;

          static TermWeightor combine(const JArray< TermWeightor > &);
          static TermWeightor fieldWeightor(jdouble, const JArray< ::java::lang::String > &);
          static TermWeightor fieldWeightor(jdouble, const ::java::util::Set &);
          static TermWeightor lengthWeightor(jdouble, jdouble);
          static TermWeightor termAndFieldWeightor(jdouble, const JArray< ::org::apache::lucene::index::Term > &);
          static TermWeightor termAndFieldWeightor(jdouble, const ::java::util::Set &);
          static TermWeightor termFreqWeightor(const ::java::util::Map &, jdouble, jdouble);
          static TermWeightor termWeightor(jdouble, const JArray< ::org::apache::lucene::util::BytesRef > &);
          static TermWeightor termWeightor(jdouble, const ::java::util::Set &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(TermWeightor);
        extern PyTypeObject *PY_TYPE(TermWeightor);

        class t_TermWeightor {
        public:
          PyObject_HEAD
          TermWeightor object;
          static PyObject *wrap_Object(const TermWeightor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

#ifndef org_apache_lucene_monitor_TermWeightor_H
#define org_apache_lucene_monitor_TermWeightor_H

#include "java/util/function/ToDoubleFunction.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class TermWeightor;
      }
      namespace index {
        class Term;
      }
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
      namespace monitor {

        class TermWeightor : public ::java::util::function::ToDoubleFunction {
         public:
          enum {
            mid_combine_2cc04310a3c1533b,
            mid_fieldWeightor_f070ad61b1d68ca9,
            mid_fieldWeightor_9eb8877850472975,
            mid_lengthWeightor_bb681ae8a56a1d50,
            mid_termAndFieldWeightor_170cb22a8a5f5326,
            mid_termAndFieldWeightor_9eb8877850472975,
            mid_termFreqWeightor_921f3d1c6720e975,
            mid_termWeightor_f13c56f4b7a6b251,
            mid_termWeightor_9eb8877850472975,
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

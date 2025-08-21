#ifndef org_apache_lucene_codecs_CompetitiveImpactAccumulator_H
#define org_apache_lucene_codecs_CompetitiveImpactAccumulator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Impact;
      }
      namespace codecs {
        class CompetitiveImpactAccumulator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class CompetitiveImpactAccumulator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_52c53d6e59b40db2,
            mid_addAll_288d25bbc1d31eba,
            mid_clear_3720c61b0679eb3e,
            mid_copy_288d25bbc1d31eba,
            mid_getCompetitiveFreqNormPairs_36830460e10839eb,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompetitiveImpactAccumulator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompetitiveImpactAccumulator(const CompetitiveImpactAccumulator& obj) : ::java::lang::Object(obj) {}

          CompetitiveImpactAccumulator();

          void add(jint, jlong) const;
          void addAll(const CompetitiveImpactAccumulator &) const;
          void clear() const;
          void copy(const CompetitiveImpactAccumulator &) const;
          ::java::util::List getCompetitiveFreqNormPairs() const;
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompetitiveImpactAccumulator);
        extern PyTypeObject *PY_TYPE(CompetitiveImpactAccumulator);

        class t_CompetitiveImpactAccumulator {
        public:
          PyObject_HEAD
          CompetitiveImpactAccumulator object;
          static PyObject *wrap_Object(const CompetitiveImpactAccumulator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

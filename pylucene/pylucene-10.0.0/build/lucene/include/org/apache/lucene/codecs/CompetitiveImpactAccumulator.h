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
            mid_init$_e7bdbe105ce1bafb,
            mid_add_1d43622e571bd043,
            mid_addAll_33754bb92d0f3662,
            mid_clear_e7bdbe105ce1bafb,
            mid_copy_33754bb92d0f3662,
            mid_getCompetitiveFreqNormPairs_1387e1e2702ac173,
            mid_toString_e7df854526d67fa3,
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

#ifndef org_apache_lucene_analysis_charfilter_MappingCharFilter_H
#define org_apache_lucene_analysis_charfilter_MappingCharFilter_H

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {
          class NormalizeCharMap;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class MappingCharFilter : public ::org::apache::lucene::analysis::charfilter::BaseCharFilter {
           public:
            enum {
              mid_init$_41247899f28ca818,
              mid_read_bd89ce15dad49192,
              mid_read_872baf22ed11fbaa,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MappingCharFilter(jobject obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MappingCharFilter(const MappingCharFilter& obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {}

            MappingCharFilter(const ::org::apache::lucene::analysis::charfilter::NormalizeCharMap &, const ::java::io::Reader &);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
            void reset() const;
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
      namespace analysis {
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(MappingCharFilter);
          extern PyTypeObject *PY_TYPE(MappingCharFilter);

          class t_MappingCharFilter {
          public:
            PyObject_HEAD
            MappingCharFilter object;
            static PyObject *wrap_Object(const MappingCharFilter&);
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

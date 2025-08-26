#ifndef org_apache_lucene_facet_range_DynamicRangeUtil_H
#define org_apache_lucene_facet_range_DynamicRangeUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace range {
          class DynamicRangeUtil$DynamicRangeInfo;
        }
      }
      namespace search {
        class LongValuesSource;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DynamicRangeUtil : public ::java::lang::Object {
           public:
            enum {
              mid_computeDynamicNumericRanges_c37b3dc3713ade2d,
              mid_computeDynamicRanges_51ffb8659e98b6fe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DynamicRangeUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DynamicRangeUtil(const DynamicRangeUtil& obj) : ::java::lang::Object(obj) {}

            static ::java::util::List computeDynamicNumericRanges(const JArray< jlong > &, const JArray< jlong > &, jint, jlong, jint);
            static ::java::util::List computeDynamicRanges(const ::java::lang::String &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::search::LongValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, jint, const ::java::util::concurrent::ExecutorService &);
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
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DynamicRangeUtil);
          extern PyTypeObject *PY_TYPE(DynamicRangeUtil);

          class t_DynamicRangeUtil {
          public:
            PyObject_HEAD
            DynamicRangeUtil object;
            static PyObject *wrap_Object(const DynamicRangeUtil&);
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

#ifndef org_apache_lucene_search_vectorhighlight_SimpleFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_SimpleFragmentsBuilder_H

#include "org/apache/lucene/search/vectorhighlight/BaseFragmentsBuilder.h"

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
      namespace search {
        namespace vectorhighlight {
          class FieldFragList$WeightedFragInfo;
          class BoundaryScanner;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class SimpleFragmentsBuilder : public ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_d02f6a95bffc041a,
              mid_init$_520d54259d3a0572,
              mid_init$_9d55354f1fe7740b,
              mid_getWeightedFragInfoList_52060c8532319091,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFragmentsBuilder(jobject obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFragmentsBuilder(const SimpleFragmentsBuilder& obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {}

            SimpleFragmentsBuilder();
            SimpleFragmentsBuilder(const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);
            SimpleFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &);
            SimpleFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);

            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
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
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(SimpleFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(SimpleFragmentsBuilder);

          class t_SimpleFragmentsBuilder {
          public:
            PyObject_HEAD
            SimpleFragmentsBuilder object;
            static PyObject *wrap_Object(const SimpleFragmentsBuilder&);
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

#ifndef org_apache_lucene_search_matchhighlight_MatchRegionRetriever$FieldValueProvider_H
#define org_apache_lucene_search_matchhighlight_MatchRegionRetriever$FieldValueProvider_H

#include "java/lang/Iterable.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchRegionRetriever$FieldValueProvider : public ::java::lang::Iterable {
           public:
            enum {
              mid_getValues_8eaa545bb5a79de3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchRegionRetriever$FieldValueProvider(jobject obj) : ::java::lang::Iterable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchRegionRetriever$FieldValueProvider(const MatchRegionRetriever$FieldValueProvider& obj) : ::java::lang::Iterable(obj) {}

            ::java::util::List getValues(const ::java::lang::String &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchRegionRetriever$FieldValueProvider);
          extern PyTypeObject *PY_TYPE(MatchRegionRetriever$FieldValueProvider);

          class t_MatchRegionRetriever$FieldValueProvider {
          public:
            PyObject_HEAD
            MatchRegionRetriever$FieldValueProvider object;
            static PyObject *wrap_Object(const MatchRegionRetriever$FieldValueProvider&);
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

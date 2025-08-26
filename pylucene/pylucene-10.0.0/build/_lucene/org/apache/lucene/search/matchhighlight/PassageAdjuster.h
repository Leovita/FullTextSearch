#ifndef org_apache_lucene_search_matchhighlight_PassageAdjuster_H
#define org_apache_lucene_search_matchhighlight_PassageAdjuster_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class Passage;
          class OffsetRange;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class PassageAdjuster : public ::java::lang::Object {
           public:
            enum {
              mid_adjust_20ee6581a15c41cf,
              mid_currentValue_fe2ab7d27aa3fe1a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageAdjuster(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageAdjuster(const PassageAdjuster& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::search::matchhighlight::OffsetRange adjust(const ::org::apache::lucene::search::matchhighlight::Passage &) const;
            void currentValue(const ::java::lang::CharSequence &) const;
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
          extern PyType_Def PY_TYPE_DEF(PassageAdjuster);
          extern PyTypeObject *PY_TYPE(PassageAdjuster);

          class t_PassageAdjuster {
          public:
            PyObject_HEAD
            PassageAdjuster object;
            static PyObject *wrap_Object(const PassageAdjuster&);
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

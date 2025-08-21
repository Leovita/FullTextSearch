#ifndef org_apache_lucene_search_matchhighlight_BreakIteratorShrinkingAdjuster_H
#define org_apache_lucene_search_matchhighlight_BreakIteratorShrinkingAdjuster_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class Passage;
          class PassageAdjuster;
          class OffsetRange;
        }
      }
    }
  }
}
namespace java {
  namespace text {
    class BreakIterator;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class BreakIteratorShrinkingAdjuster : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_81f559c8594973b6,
              mid_adjust_2a42c2619ab0f0c5,
              mid_currentValue_5ed8eb2e3024c663,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BreakIteratorShrinkingAdjuster(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BreakIteratorShrinkingAdjuster(const BreakIteratorShrinkingAdjuster& obj) : ::java::lang::Object(obj) {}

            BreakIteratorShrinkingAdjuster();
            BreakIteratorShrinkingAdjuster(const ::java::text::BreakIterator &);

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
          extern PyType_Def PY_TYPE_DEF(BreakIteratorShrinkingAdjuster);
          extern PyTypeObject *PY_TYPE(BreakIteratorShrinkingAdjuster);

          class t_BreakIteratorShrinkingAdjuster {
          public:
            PyObject_HEAD
            BreakIteratorShrinkingAdjuster object;
            static PyObject *wrap_Object(const BreakIteratorShrinkingAdjuster&);
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

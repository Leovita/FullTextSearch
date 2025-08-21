#ifndef org_apache_lucene_search_matchhighlight_Passage_H
#define org_apache_lucene_search_matchhighlight_Passage_H

#include "org/apache/lucene/search/matchhighlight/OffsetRange.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class Passage : public ::org::apache::lucene::search::matchhighlight::OffsetRange {
           public:
            enum {
              mid_init$_387f5fca04f5a3f6,
              mid_slice_d30ec62b6c5f74e9,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_markers,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Passage(jobject obj) : ::org::apache::lucene::search::matchhighlight::OffsetRange(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Passage(const Passage& obj) : ::org::apache::lucene::search::matchhighlight::OffsetRange(obj) {}

            ::java::util::List _get_markers() const;
            void _set_markers(const ::java::util::List &) const;

            Passage(jint, jint, const ::java::util::List &);

            ::org::apache::lucene::search::matchhighlight::OffsetRange slice(jint, jint) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(Passage);
          extern PyTypeObject *PY_TYPE(Passage);

          class t_Passage {
          public:
            PyObject_HEAD
            Passage object;
            static PyObject *wrap_Object(const Passage&);
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

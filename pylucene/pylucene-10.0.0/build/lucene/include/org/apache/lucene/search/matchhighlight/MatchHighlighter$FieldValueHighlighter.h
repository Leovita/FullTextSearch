#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class MatchHighlighter$FieldValueHighlighter;
          class OffsetRange;
          class MatchHighlighter$QueryOffsetRange;
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
        namespace matchhighlight {

          class MatchHighlighter$FieldValueHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_alwaysFetchedFields_aa58b3beec16cbbd,
              mid_format_c8c8b5629093fec6,
              mid_isApplicable_65537d1c9b4b0498,
              mid_or_05573c68f7c3ae7a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchHighlighter$FieldValueHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchHighlighter$FieldValueHighlighter(const MatchHighlighter$FieldValueHighlighter& obj) : ::java::lang::Object(obj) {}

            ::java::util::Collection alwaysFetchedFields() const;
            ::java::util::List format(const ::java::lang::String &, const ::java::util::List &, const ::java::lang::String &, const ::java::util::List &, const ::java::util::List &) const;
            jboolean isApplicable(const ::java::lang::String &, jboolean) const;
            MatchHighlighter$FieldValueHighlighter or$(const MatchHighlighter$FieldValueHighlighter &) const;
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
          extern PyType_Def PY_TYPE_DEF(MatchHighlighter$FieldValueHighlighter);
          extern PyTypeObject *PY_TYPE(MatchHighlighter$FieldValueHighlighter);

          class t_MatchHighlighter$FieldValueHighlighter {
          public:
            PyObject_HEAD
            MatchHighlighter$FieldValueHighlighter object;
            static PyObject *wrap_Object(const MatchHighlighter$FieldValueHighlighter&);
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

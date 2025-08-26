#ifndef org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H
#define org_apache_lucene_search_matchhighlight_MatchHighlighter$FieldValueHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class MatchHighlighter$QueryOffsetRange;
          class OffsetRange;
          class MatchHighlighter$FieldValueHighlighter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class List;
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
              mid_alwaysFetchedFields_4a269b968b3a511f,
              mid_format_81d754d28d25cd6d,
              mid_isApplicable_33c7d9e5bcac203c,
              mid_or_675ad7b37d81cec0,
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

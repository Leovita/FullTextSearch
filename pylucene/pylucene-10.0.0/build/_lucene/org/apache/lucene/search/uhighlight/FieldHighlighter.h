#ifndef org_apache_lucene_search_uhighlight_FieldHighlighter_H
#define org_apache_lucene_search_uhighlight_FieldHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class PassageFormatter;
          class FieldOffsetStrategy;
          class Passage;
          class UnifiedHighlighter$OffsetSource;
          class PassageScorer;
        }
      }
      namespace index {
        class LeafReader;
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
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class FieldHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3ccd6c72929864f8,
              mid_getField_e7df854526d67fa3,
              mid_getOffsetSource_e52a710f16ce6a53,
              mid_highlightFieldForDoc_be8b3992a2f785c6,
              mid_highlightOffsetsEnums_94f4d3cb24112e40,
              mid_getSummaryPassagesNoHighlight_5c9a2802b7b8b4e8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldHighlighter(const FieldHighlighter& obj) : ::java::lang::Object(obj) {}

            FieldHighlighter(const ::java::lang::String &, const ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy &, const ::java::text::BreakIterator &, const ::org::apache::lucene::search::uhighlight::PassageScorer &, jint, jint, const ::org::apache::lucene::search::uhighlight::PassageFormatter &, const ::java::util::Comparator &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::java::lang::Object highlightFieldForDoc(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldHighlighter);
          extern PyTypeObject *PY_TYPE(FieldHighlighter);

          class t_FieldHighlighter {
          public:
            PyObject_HEAD
            FieldHighlighter object;
            static PyObject *wrap_Object(const FieldHighlighter&);
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

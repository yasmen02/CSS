/* mg_data.h:
 * THIS FILE IS AUTO-GENERATED DURING THE BUILD by: ./generate_uudmap
 *
 * These values will populate PL_magic_data[]: this is an array of
 * per-magic U8 values containing an index into PL_magic_vtables[]
 * plus two flags:
 *    PERL_MAGIC_READONLY_ACCEPTABLE
 *    PERL_MAGIC_VALUE_MAGIC
*/
{
    /* sv '\0' Special scalar variable */
    want_vtbl_sv | PERL_MAGIC_READONLY_ACCEPTABLE,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    /* arylen '#' Array length ($#ary) */
    want_vtbl_arylen | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* rhash '%' Extra data for restricted hashes */
    magic_vtable_max | PERL_MAGIC_VALUE_MAGIC,
    0,
    0,
    0,
    0,
    /* debugvar '*' $DB::single, signal, trace vars */
    want_vtbl_debugvar,
    0,
    0,
    0,
    /* pos '.' pos() lvalue */
    want_vtbl_pos | PERL_MAGIC_VALUE_MAGIC,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    /* symtab ':' Extra data for symbol tables */
    magic_vtable_max | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* backref '<' For weak ref data */
    want_vtbl_backref | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    0,
    0,
    0,
    /* arylen_p '@' To move arylen out of XPVAV */
    magic_vtable_max | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* bm 'B' Boyer-Moore (fast string search) */
    want_vtbl_regexp | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* regdata 'D' Regex match position data (@+ and @- vars) */
    want_vtbl_regdata,
    /* env 'E' %ENV hash */
    want_vtbl_env,
    0,
    0,
    /* hints 'H' %^H hash */
    want_vtbl_hints,
    /* isa 'I' @ISA array */
    want_vtbl_isa,
    0,
    0,
    /* dbfile 'L' Debugger %_<filename */
    magic_vtable_max,
    0,
    0,
    0,
    /* tied 'P' Tied array or hash */
    want_vtbl_pack | PERL_MAGIC_VALUE_MAGIC,
    0,
    0,
    /* sig 'S' %SIG hash */
    want_vtbl_sig,
    0,
    /* uvar 'U' Available for use by extensions */
    want_vtbl_uvar,
    /* vstring 'V' SV was vstring literal */
    magic_vtable_max | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* destruct 'X' destruct callback */
    want_vtbl_destruct | PERL_MAGIC_VALUE_MAGIC,
    /* nonelem 'Y' Array element that does not exist */
    want_vtbl_nonelem | PERL_MAGIC_VALUE_MAGIC,
    /* hook 'Z' %{^HOOK} hash */
    want_vtbl_hook,
    0,
    /* lvref '\' Lvalue reference constructor */
    want_vtbl_lvref,
    /* checkcall ']' Inlining/mutation of call to this CV */
    want_vtbl_checkcall | PERL_MAGIC_VALUE_MAGIC,
    /* extvalue '^' Value magic available for use by extensions */
    magic_vtable_max | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    0,
    0,
    0,
    0,
    /* overload_table 'c' Holds overload table (AMT) on stash */
    want_vtbl_ovrld,
    /* regdatum 'd' Regex match position data element */
    want_vtbl_regdatum,
    /* envelem 'e' %ENV hash element */
    want_vtbl_envelem,
    /* fm 'f' Formline ('compiled' format) */
    want_vtbl_regexp | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    /* regex_global 'g' m//g target */
    want_vtbl_mglob | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    /* hintselem 'h' %^H hash element */
    want_vtbl_hintselem,
    /* isaelem 'i' @ISA array element */
    want_vtbl_isaelem,
    0,
    /* nkeys 'k' scalar(keys()) lvalue */
    want_vtbl_nkeys | PERL_MAGIC_VALUE_MAGIC,
    /* dbline 'l' Debugger %_<filename element */
    want_vtbl_dbline,
    0,
    0,
    /* collxfrm 'o' Locale transformation */
    want_vtbl_collxfrm | PERL_MAGIC_VALUE_MAGIC,
    /* tiedelem 'p' Tied array or hash element */
    want_vtbl_packelem,
    /* tiedscalar 'q' Tied scalar or handle */
    want_vtbl_packelem,
    /* qr 'r' Precompiled qr// regex */
    want_vtbl_regexp | PERL_MAGIC_READONLY_ACCEPTABLE | PERL_MAGIC_VALUE_MAGIC,
    /* sigelem 's' %SIG hash element */
    want_vtbl_sigelem,
    /* taint 't' Taintedness */
    want_vtbl_taint | PERL_MAGIC_VALUE_MAGIC,
    0,
    /* vec 'v' vec() lvalue */
    want_vtbl_vec | PERL_MAGIC_VALUE_MAGIC,
    /* utf8 'w' Cached UTF-8 information */
    want_vtbl_utf8 | PERL_MAGIC_VALUE_MAGIC,
    /* substr 'x' substr() lvalue */
    want_vtbl_substr | PERL_MAGIC_VALUE_MAGIC,
    /* defelem 'y' Shadow "foreach" iterator variable / smart parameter vivification */
    want_vtbl_defelem | PERL_MAGIC_VALUE_MAGIC,
    /* hookelem 'z' %{^HOOK} hash element */
    want_vtbl_hookelem,
    0,
    0,
    0,
    /* ext '~' Variable magic available for use by extensions */
    magic_vtable_max | PERL_MAGIC_READONLY_ACCEPTABLE,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
}

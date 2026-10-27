// rea decompile_all
// name: FUN_006aa568
// address: 0x6aa568
// body: available
// range: 0x6aa568-0x6aa7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6aa583 (push 0x6aa7dc followed by fs-segment stack chaining); handler 0x6aa7dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aa568(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x6aa578;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  bVar2 = true;
  puStack_14 = &LAB_006aa7dc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00408640(local_8,L"begin");
  if ((((((!bVar2) && (FUN_00408640(local_8,&DAT_006aa810), !bVar2)) &&
        (FUN_00408640(local_8,&DAT_006aa824), !bVar2)) &&
       (((FUN_00408640(local_8,L"then"), !bVar2 && (FUN_00408640(local_8,L"else"), !bVar2)) &&
        ((FUN_00408640(local_8,L"while"), !bVar2 &&
         ((FUN_00408640(local_8,&DAT_006aa880), !bVar2 &&
          (FUN_00408640(local_8,&DAT_006aa894), !bVar2)))))))) &&
      ((FUN_00408640(local_8,L"break"), !bVar2 &&
       (((FUN_00408640(local_8,L"continue"), !bVar2 && (FUN_00408640(local_8,L"with"), !bVar2)) &&
        (FUN_00408640(local_8,L"until"), !bVar2)))))) &&
     (((((FUN_00408640(local_8,L"repeat"), !bVar2 && (FUN_00408640(local_8,L"exit"), !bVar2)) &&
        ((FUN_00408640(local_8,&DAT_006aa944), !bVar2 &&
         ((FUN_00408640(local_8,&DAT_006aa958), !bVar2 &&
          (FUN_00408640(local_8,&DAT_006aa96c), !bVar2)))))) &&
       (FUN_00408640(local_8,&DAT_006aa980), !bVar2)) &&
      (((((FUN_00408640(local_8,L"return"), !bVar2 && (FUN_00408640(local_8,&DAT_006aa9b0), !bVar2))
         && (FUN_00408640(local_8,&DAT_006aa9c4), !bVar2)) &&
        ((FUN_00408640(local_8,L"self"), !bVar2 && (FUN_00408640(local_8,L"other"), !bVar2)))) &&
       ((((FUN_00408640(local_8,&DAT_006aaa08), !bVar2 &&
          ((FUN_00408640(local_8,L"noone"), !bVar2 && (FUN_00408640(local_8,L"global"), !bVar2))))
         && (FUN_00408640(local_8,L"local"), !bVar2)) &&
        ((((FUN_00408640(local_8,L"switch"), !bVar2 && (FUN_00408640(local_8,L"case"), !bVar2)) &&
          (FUN_00408640(local_8,L"default"), !bVar2)) &&
         (FUN_00408640(local_8,&DAT_006aaab8), !bVar2)))))))))) {
    FUN_00408640(local_8,L"globalvar");
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_006aa7e3;
  puStack_14 = (undefined1 *)0x6aa7db;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}

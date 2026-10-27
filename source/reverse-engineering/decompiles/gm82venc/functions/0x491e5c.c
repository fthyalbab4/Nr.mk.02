// rea decompile_all
// name: FUN_00491e5c
// address: 0x491e5c
// body: available
// range: 0x491e5c-0x491ec5 inclusive
// range: 0x491ecd-0x491f55 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491e91 (push 0x491ec6 followed by fs-segment stack chaining); handler 0x491ec6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491e5c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  undefined1 *puVar4;
  undefined1 *puVar5;

  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  if (param_2 != 0) {
    puStackY_34 = (undefined1 *)0x491e71;
    uVar1 = FUN_00491d64(param_2);
    if (*(int *)(param_1 + 0x2d8) == 0) {
      puStackY_34 = (undefined1 *)0x491ef1;
      uVar3 = FUN_00491c34(param_1);
      puStackY_34 = (undefined1 *)0x491f00;
      FUN_004bcb48(param_1,0x413,uVar3);
    }
    else {
      FUN_00491c34(param_1,0,puVar4);
      puStackY_34 = (undefined1 *)0x491f33;
      FUN_004bcb48(param_1,0x42e,0);
      if (*(HGDIOBJ *)(param_1 + 0x2d8) != (HGDIOBJ)0x0) {
        puStackY_34 = (undefined1 *)0x491f46;
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x2d8));
      }
    }
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
    return;
  }
  piVar2 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStackY_34 = &LAB_00491ec6;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(param_1 + 0x2d4));
  FUN_00464958(piVar2);
  *in_FS_OFFSET = uStackY_38;
  puStackY_34 = (undefined1 *)0x491ec5;
  FUN_00405fdc(piVar2,uStackY_38,puVar5);
  return;
}

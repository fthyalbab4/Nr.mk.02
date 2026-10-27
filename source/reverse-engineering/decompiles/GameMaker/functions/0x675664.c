// rea decompile_all
// name: FUN_00675664
// address: 0x675664
// body: available
// range: 0x675664-0x675753 inclusive
// range: 0x67575b-0x675761 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x675695 (push 0x675754 followed by fs-segment stack chaining); handler 0x675754 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675664(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  if (param_1[0x9e] != 0) {
    *(short *)(param_1 + 0x6b) = (short)param_1[0x6b] + 1;
    puStack_20 = &LAB_00675754;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    if ((char)param_1[0xb7] == '\0') {
      iVar6 = *(int *)(param_1[0x9e] + 0x2c);
    }
    else {
      iVar6 = *(int *)(param_1[0x9e] + 0x1c);
    }
    local_8 = param_1;
    if (iVar6 != 0) {
      iVar4 = *(int *)(*(int *)(iVar6 + 8) + 8);
      puStack_1c = &stack0xfffffffc;
      if (-1 < iVar4 + -1) {
        iVar5 = 0;
        puStack_1c = &stack0xfffffffc;
        do {
          uVar3 = FUN_00672cc0(iVar6,iVar5);
          local_c = (**(code **)(*local_8 + 0x15c))(local_8,uVar3);
          if (local_c != 0) {
            cVar2 = FUN_0067240c(local_8[0x9e]);
            if ((cVar2 == '\0') || ((byte)(*(char *)(local_8[0x9e] + 0x14) - 3U) < 2)) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
            FUN_00679318(local_c,uVar3);
            (**(code **)(*local_8 + 0xfc))(local_8,&local_c);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      puVar1 = puStack_1c;
      *in_FS_OFFSET = uStack_24;
      puStack_1c = (undefined1 *)0x67575b;
      puStack_20 = (undefined1 *)0x675753;
      FUN_004f2c1c(local_8,uStack_24,puVar1);
      return;
    }
    FUN_0040670c();
  }
  return;
}

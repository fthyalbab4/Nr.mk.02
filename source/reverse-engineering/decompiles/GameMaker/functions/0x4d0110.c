// rea decompile_all
// name: FUN_004d0110
// address: 0x4d0110
// body: available
// range: 0x4d0110-0x4d0224 inclusive
// range: 0x4d022c-0x4d0232 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d01a5 (push 0x4d0225 followed by fs-segment stack chaining); handler 0x4d0225 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0110(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1824;
  undefined1 local_180c [2048];
  undefined1 local_100c [8];
  int *piStack_1004;
  undefined1 local_80c [2048];
  undefined4 *local_c;

  uStackY_1824 = 0x4d0135;
  piStack_1004 = param_1;
  local_c = param_2;
  uVar1 = FUN_00488540();
  uStackY_1824 = 0x4d0146;
  FUN_0048795c(uVar1,local_80c,local_100c);
  if (*param_1 != 0) {
    iVar2 = FUN_00417670(local_80c);
    iVar3 = FUN_00417670(local_100c);
    iVar4 = FUN_00417670(local_180c);
    uStackY_1824 = 0x4d0188;
    pvVar5 = GlobalAlloc(0x42,(iVar2 + iVar3 + iVar4 + 3) * 2 + 8);
    *local_c = pvVar5;
    puVar6 = GlobalLock((HGLOBAL)*local_c);
    uStackY_1824 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_1824;
    uVar7 = (int)(puVar6 + 4) - (int)puVar6;
    iVar2 = (int)uVar7 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar7 & 1) != 0);
    }
    *puVar6 = (short)iVar2;
    iVar2 = FUN_00417704(puVar6 + 4,local_100c);
    uVar7 = (iVar2 + 2) - (int)puVar6;
    iVar3 = (int)uVar7 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar7 & 1) != 0);
    }
    puVar6[1] = (short)iVar3;
    iVar2 = FUN_00417704(iVar2 + 2,local_80c);
    uVar7 = (iVar2 + 2) - (int)puVar6;
    iVar3 = (int)uVar7 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar7 & 1) != 0);
    }
    puVar6[2] = (short)iVar3;
    FUN_004176cc(iVar2 + 2,local_180c);
    *in_FS_OFFSET = uStackY_1824;
    uStackY_1824 = 0x4d0224;
    GlobalUnlock((HGLOBAL)*local_c);
    return;
  }
  return;
}

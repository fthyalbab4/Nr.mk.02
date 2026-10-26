// rea decompile_all
// name: FUN_004b2174
// address: 0x4b2174
// body: available
// range: 0x4b2174-0x4b234e inclusive
// range: 0x4b2356-0x4b235b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b21aa (push 0x4b234f followed by fs-segment stack chaining); handler 0x4b234f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2174(int param_1,int param_2,ushort param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x2f0) != '\0') || ((param_3 & 8) == 0)) {
    return;
  }
  puStack_1c = &LAB_004b234f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
  }
  if ((*(char *)(param_1 + 0x2e0) == '\0') || (param_2 == 0)) {
    uStack_24 = 0x4b232f;
    FUN_004b24b4(param_1,param_2);
    goto LAB_004b232f;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 4) == 0) {
      puStack_18 = &stack0xfffffffc;
      iVar3 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x2e4),param_2);
      if (iVar3 == -1) {
        uStack_24 = 0x4b2323;
        FUN_004b24b4(param_1,param_2);
      }
      else {
        uStack_24 = 0x4b22f5;
        iVar3 = FUN_0043b048(*(undefined4 *)(param_1 + 0x2e4),0);
        if (param_2 != iVar3) {
          FUN_0043b258(*(undefined4 *)(param_1 + 0x2e4),param_2,0);
          uStack_24 = 0x4b2317;
          FUN_004b2464(param_1,param_2,0);
        }
      }
    }
    else {
      uStack_24 = 0x4b22d0;
      puStack_18 = &stack0xfffffffc;
      FUN_004b20cc(param_1,param_2);
    }
    goto LAB_004b232f;
  }
  puStack_18 = &stack0xfffffffc;
  if ((*(int *)(param_1 + 0x2ec) == 0) &&
     (puStack_18 = &stack0xfffffffc, 0 < *(int *)(*(int *)(param_1 + 0x2e4) + 8))) {
    puStack_18 = &stack0xfffffffc;
    uVar2 = FUN_004b2368(param_1,0);
    *(undefined4 *)(param_1 + 0x2ec) = uVar2;
  }
  if (*(int *)(param_1 + 0x2ec) == 0) {
    iVar3 = FUN_004ae56c(*(undefined4 *)(param_1 + 0x2d8));
    cVar1 = FUN_004ad880(iVar3);
    if (cVar1 == '\0') {
      iVar3 = FUN_004ad1a4(iVar3);
    }
    for (; iVar3 != 0; iVar3 = FUN_004ad1a4(iVar3)) {
      cVar1 = FUN_004ad0ac(iVar3);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x2ec) = iVar3;
        break;
      }
    }
  }
  if (*(int *)(param_1 + 0x2ec) == 0) {
LAB_004b2296:
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_004ad358(param_2);
    iVar4 = FUN_004ad358(*(undefined4 *)(param_1 + 0x2ec));
    if (iVar4 <= iVar3) goto LAB_004b2296;
    uVar2 = 1;
  }
  if ((param_3 & 4) == 0) {
    uStack_24 = 1;
    FUN_004b2588(param_1,param_2,uVar2);
  }
  else {
    uStack_24 = 0x4b22ae;
    FUN_004b2130(param_1,param_2,uVar2);
  }
LAB_004b232f:
  FUN_004b2804(param_1);
  *in_FS_OFFSET = uStack_24;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  return;
}

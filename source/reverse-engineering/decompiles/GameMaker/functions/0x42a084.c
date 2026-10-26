// rea decompile_all
// name: FUN_0042a084
// address: 0x42a084
// body: available
// range: 0x42a084-0x42a23c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a0a1 (push 0x42a23d followed by fs-segment stack chaining); handler 0x42a23d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a084(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 unaff_EDI;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0042a23d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*param_2 == 0x400c) {
    puStack_1c = &stack0xfffffffc;
    FUN_0042a084(param_1,*(undefined4 *)(param_2 + 4));
    goto LAB_0042a227;
  }
  puVar2 = &stack0xfffffffc;
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00424940(param_1);
    puVar2 = puStack_1c;
  }
  puStack_1c = puVar2;
  uVar1 = *param_2;
  uVar4 = (uint)uVar1;
  if (0x100 < uVar4) {
    if (uVar4 == 0x101) {
      FUN_0042a018(param_1,param_2);
      goto LAB_0042a227;
    }
    if (uVar4 == 0x102) {
      FUN_00408144(&local_c,*(undefined4 *)(param_2 + 4));
      uStack_24 = 0x42a1cb;
      FUN_00429ebc(param_1,local_c);
      goto LAB_0042a227;
    }
LAB_0042a1d8:
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0xfff) < 0x10f) {
        FUN_00424d3c(param_1,param_2);
      }
      else {
        cVar3 = FUN_0042c960(uVar4,&local_8);
        if (cVar3 == '\0') {
          FUN_00424130();
        }
        else {
          (**(code **)(*local_8 + 0x20))(local_8,param_1,param_2);
        }
      }
    }
    else {
      FUN_00424a7c(param_1,param_2,&LAB_0042a07c);
    }
    goto LAB_0042a227;
  }
  if (uVar4 == 0x100) {
    FUN_00429f78(param_1,*(undefined4 *)(param_2 + 4));
    goto LAB_0042a227;
  }
  if (uVar4 - 0x10 < 3) {
    FUN_004252bc(param_1,param_2,3);
    goto LAB_0042a227;
  }
  if (uVar4 == 0x13) {
    if ((*(byte *)((int)param_2 + 0xb) & 0x80) == 0) {
      FUN_004252bc(param_1,param_2,3);
    }
    else {
      FUN_004252bc(param_1,param_2,5);
    }
    goto LAB_0042a227;
  }
  if (uVar4 - 0x10 != 4) goto LAB_0042a1d8;
  if (*(int *)(param_2 + 6) == 0) {
    if (*(uint *)(param_2 + 4) < 0x80000000) {
LAB_0042a158:
      if (*(int *)(param_2 + 6) == -1) {
        if (0x7fffffff < *(uint *)(param_2 + 4)) {
LAB_0042a16b:
          FUN_004252bc(param_1,param_2,3);
          goto LAB_0042a227;
        }
      }
      else if (-2 < *(int *)(param_2 + 6)) goto LAB_0042a16b;
    }
  }
  else if (*(int *)(param_2 + 6) < 1) goto LAB_0042a158;
  if (DAT_00773e60 == '\0') {
    FUN_004252bc(param_1,param_2,0x14);
  }
  else {
    FUN_004252bc(param_1,param_2,5);
  }
LAB_0042a227:
  *in_FS_OFFSET = puStack_20;
  puStack_1c = (undefined1 *)0x42a23c;
  FUN_00407a78(&local_c,puStack_20,unaff_EDI);
  return;
}

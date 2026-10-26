// rea decompile_all
// name: FUN_006edd54
// address: 0x6edd54
// body: available
// range: 0x6edd54-0x6edda5 inclusive
// range: 0x6ede1e-0x6ee1dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006edd54(int param_1,undefined4 param_2,int param_3,char param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int aiStackY_17f4 [1520];
  undefined4 local_18;
  int local_8;

  bVar4 = 0;
  local_8 = param_3;
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0xfff5);
  FUN_006ed0a0(param_1);
  if (param_4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x5f0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  switch(param_2) {
  case 0:
    FUN_006e6b68(*(undefined4 *)(param_1 + 0x5e8),local_8,param_8);
    break;
  case 1:
    FUN_006e6ee4(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 2:
    FUN_006e6f20(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 3:
    FUN_006e6f5c(*(undefined4 *)(param_1 + 0x5e8),param_5,local_8);
    break;
  case 4:
    FUN_006e6a1c(*(undefined4 *)(param_1 + 0x5e8));
    break;
  case 5:
    FUN_006e6a80(*(undefined4 *)(param_1 + 0x5e8),local_8);
    break;
  case 6:
    FUN_006e6e9c(*(undefined4 *)(param_1 + 0x5e8),param_5,iVar1);
    break;
  case 7:
    FUN_006e6b28(*(undefined4 *)(param_1 + 0x5e8),local_8);
    break;
  case 8:
    FUN_006e7164(*(undefined4 *)(param_1 + 0x5e8),local_8,iVar1);
    FUN_006e71a8(*(undefined4 *)(param_1 + 0x5e8),param_8,iVar1);
    break;
  case 9:
    FUN_006e6fb8(*(undefined4 *)(param_1 + 0x5e8),local_8,0 < param_8);
    break;
  case 10:
    if (0 < local_8) {
      FUN_006e6e24(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    }
    if (0 < param_8) {
      FUN_006e6e60(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    }
    break;
  default:
    FUN_004d43f8(L"Not yet Implemented");
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
    return;
  case 0xc:
    if (param_8 < 1) {
      FUN_006e7014(*(undefined4 *)(param_1 + 0x5e8),local_8,iVar1);
    }
    else {
      FUN_006e70bc(*(undefined4 *)(param_1 + 0x5e8),local_8,iVar1);
    }
    break;
  case 0xd:
    if (param_6 < 1) {
      FUN_006e7058(*(undefined4 *)(param_1 + 0x5e8),param_8 - param_7,param_8 + param_7,iVar1,
                   local_8);
    }
    else {
      FUN_006e7100(*(undefined4 *)(param_1 + 0x5e8),param_8 - param_7,param_8 + param_7,iVar1,
                   local_8);
    }
    break;
  case 0xe:
    FUN_006e6bd0(*(undefined4 *)(param_1 + 0x5e8),local_8,param_8);
    break;
  case 0xf:
    FUN_006e71ec(*(undefined4 *)(param_1 + 0x5e8),param_5,local_8);
    break;
  case 0x10:
    FUN_006e7248(*(undefined4 *)(param_1 + 0x5e8),local_8,0 < param_8,iVar1,0 < param_7);
    break;
  case 0x11:
    FUN_006e731c(*(undefined4 *)(param_1 + 0x5e8),local_8,iVar1);
    break;
  case 0x12:
    FUN_006e73ac(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 0x13:
    FUN_006e6c50(*(undefined4 *)(param_1 + 0x5e8),local_8,param_8);
    break;
  case 0x14:
    FUN_006e6c98(*(undefined4 *)(param_1 + 0x5e8),local_8,param_8);
    break;
  case 0x15:
    FUN_006e6cd8(*(undefined4 *)(param_1 + 0x5e8),local_8,&stack0xffffffe8);
    puVar2 = (undefined4 *)(param_1 + 0x610 + (uint)bVar4 * -8);
    *(undefined4 *)(param_1 + 0x60c) = local_18;
    puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
    *puVar2 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar4 * 0xfffffffe * 4);
    *puVar3 = *(undefined4 *)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar3[(uint)bVar4 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    break;
  case 0x16:
    FUN_006e74a0(*(undefined4 *)(param_1 + 0x5e8),param_5,0 < local_8,iVar1,param_6,0 < param_7,
                 0 < param_8);
    break;
  case 0x17:
    FUN_006e7750(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 0x18:
    FUN_006e778c(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 0x19:
    FUN_006e7520(*(undefined4 *)(param_1 + 0x5e8),param_5,local_8,iVar1,0 < param_8);
    break;
  case 0x1a:
    FUN_006e75e8(*(undefined4 *)(param_1 + 0x5e8),param_5,local_8);
    break;
  case 0x1b:
    FUN_006e742c(*(undefined4 *)(param_1 + 0x5e8),iVar1);
    break;
  case 0x1c:
    FUN_006e7584(*(undefined4 *)(param_1 + 0x5e8),param_5,local_8,iVar1,0 < param_8);
    break;
  case 0x1d:
    FUN_006e72b4(*(undefined4 *)(param_1 + 0x5e8),local_8,0 < param_8,iVar1,0 < param_7);
  }
  *(undefined1 *)(param_1 + 0x5f6) = 1;
  FUN_006ed868(param_1,1);
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
  return;
}

// rea decompile_all
// name: FUN_00527da0
// address: 0x527da0
// body: available
// range: 0x527da0-0x527ef5 inclusive
// range: 0x527f2a-0x5281d6 inclusive
// range: 0x52820b-0x5283d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00527da0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  uint local_18;

  local_18 = param_2 * 4 + -0x21524111 + param_3;
  local_20 = local_18;
  local_1c = local_18;
  if (((uint)param_1 & 3) == 0) {
    for (; 0xc < param_2; param_2 = param_2 + -0xc) {
      local_20 = local_20 + param_1[2];
      uVar1 = (local_18 + *param_1) - local_20 ^ (local_20 * 0x10 | local_20 >> 0x1c);
      iVar2 = local_20 + local_1c + param_1[1];
      uVar3 = (local_1c + param_1[1]) - uVar1 ^ (uVar1 << 6 | uVar1 >> 0x1a);
      iVar4 = uVar1 + iVar2;
      uVar1 = iVar2 - uVar3 ^ (uVar3 << 8 | uVar3 >> 0x18);
      iVar2 = uVar3 + iVar4;
      local_18 = iVar4 - uVar1 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
      iVar4 = uVar1 + iVar2;
      local_1c = iVar2 - local_18 ^ (local_18 << 0x13 | local_18 >> 0xd);
      local_18 = local_18 + iVar4;
      local_20 = iVar4 - local_1c ^ (local_1c << 4 | local_1c >> 0x1c);
      local_1c = local_1c + local_18;
      param_1 = param_1 + 3;
    }
    switch(param_2) {
    case 0:
      return local_20;
    case 1:
      local_18 = local_18 + (*param_1 & 0xff);
      break;
    case 2:
      local_18 = local_18 + (*param_1 & 0xffff);
      break;
    case 3:
      local_18 = local_18 + (*param_1 & 0xffffff);
      break;
    case 4:
      local_18 = local_18 + *param_1;
      break;
    case 5:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + (param_1[1] & 0xff);
      break;
    case 6:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + (param_1[1] & 0xffff);
      break;
    case 7:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + (param_1[1] & 0xffffff);
      break;
    case 8:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + param_1[1];
      break;
    case 9:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + param_1[1];
      local_20 = local_20 + (param_1[2] & 0xff);
      break;
    case 10:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + param_1[1];
      local_20 = local_20 + (param_1[2] & 0xffff);
      break;
    case 0xb:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + param_1[1];
      local_20 = local_20 + (param_1[2] & 0xffffff);
      break;
    case 0xc:
      local_18 = local_18 + *param_1;
      local_1c = local_1c + param_1[1];
      local_20 = local_20 + param_1[2];
    }
  }
  else {
    for (; 0xc < param_2; param_2 = param_2 + -0xc) {
      local_20 = local_20 + param_1[2];
      uVar1 = (local_18 + *param_1) - local_20 ^ (local_20 * 0x10 | local_20 >> 0x1c);
      iVar2 = local_20 + local_1c + param_1[1];
      uVar3 = (local_1c + param_1[1]) - uVar1 ^ (uVar1 << 6 | uVar1 >> 0x1a);
      iVar4 = uVar1 + iVar2;
      uVar1 = iVar2 - uVar3 ^ (uVar3 << 8 | uVar3 >> 0x18);
      iVar2 = uVar3 + iVar4;
      local_18 = iVar4 - uVar1 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
      iVar4 = uVar1 + iVar2;
      local_1c = iVar2 - local_18 ^ (local_18 << 0x13 | local_18 >> 0xd);
      local_18 = local_18 + iVar4;
      local_20 = iVar4 - local_1c ^ (local_1c << 4 | local_1c >> 0x1c);
      local_1c = local_1c + local_18;
      param_1 = param_1 + 3;
    }
    switch(param_2) {
    case 0:
      return local_20;
    default:
      local_20 = local_20 + (uint)*(byte *)((int)param_1 + 0xb) * 0x1000000;
    case 0xb:
      local_20 = local_20 + (uint)*(byte *)((int)param_1 + 10) * 0x10000;
    case 10:
      local_20 = local_20 + (uint)*(byte *)((int)param_1 + 9) * 0x100;
    case 9:
      local_20 = local_20 + (byte)param_1[2];
    case 8:
      local_1c = local_1c + (uint)*(byte *)((int)param_1 + 7) * 0x1000000;
    case 7:
      local_1c = local_1c + (uint)*(byte *)((int)param_1 + 6) * 0x10000;
    case 6:
      local_1c = local_1c + (uint)*(byte *)((int)param_1 + 5) * 0x100;
    case 5:
      local_1c = local_1c + (byte)param_1[1];
    case 4:
      local_18 = local_18 + (uint)*(byte *)((int)param_1 + 3) * 0x1000000;
    case 3:
      local_18 = local_18 + (uint)*(byte *)((int)param_1 + 2) * 0x10000;
    case 2:
      local_18 = local_18 + (uint)*(byte *)((int)param_1 + 1) * 0x100;
    case 1:
      local_18 = local_18 + (byte)*param_1;
    }
  }
  uVar1 = (local_20 ^ local_1c) - (local_1c << 0xe | local_1c >> 0x12);
  uVar3 = (local_18 ^ uVar1) - (uVar1 * 0x800 | uVar1 >> 0x15);
  uVar5 = (local_1c ^ uVar3) - (uVar3 * 0x2000000 | uVar3 >> 7);
  uVar1 = (uVar1 ^ uVar5) - (uVar5 * 0x10000 | uVar5 >> 0x10);
  uVar3 = (uVar3 ^ uVar1) - (uVar1 * 0x10 | uVar1 >> 0x1c);
  uVar3 = (uVar5 ^ uVar3) - (uVar3 * 0x4000 | uVar3 >> 0x12);
  return (uVar1 ^ uVar3) - (uVar3 * 0x1000000 | uVar3 >> 8);
}

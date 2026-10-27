// rea decompile_all
// name: FUN_00407a5c
// address: 0x407a5c
// body: available
// range: 0x407a5c-0x407acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00407a5c(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte in_AF;
  byte bVar10;
  byte bVar11;
  byte in_TF;
  byte in_IF;
  byte bVar12;
  byte bVar13;
  byte in_NT;
  undefined2 local_4;
  ushort uStack_2;

  bVar12 = 0;
  if (param_1 == param_2) {
    return param_1;
  }
  if ((param_1 & param_2) == 0) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return param_1;
    }
  }
  cVar3 = *(char *)(param_1 - 10);
  cVar4 = cVar3 + -1;
  uVar5 = param_2;
  uVar7 = param_1;
  if (cVar4 == '\0') {
    cVar3 = *(char *)(param_2 - 10);
    cVar4 = cVar3 + -1;
    uVar5 = param_1;
    uVar7 = param_2;
    if (cVar4 == '\0') {
      iVar6 = *(int *)(param_1 - 4);
      if (iVar6 != *(int *)(param_2 - 4)) {
        return param_1;
      }
      puVar1 = (uint *)(iVar6 + -4 + param_2);
      puVar2 = (uint *)(iVar6 + -4 + param_1);
      iVar6 = -iVar6;
      uVar5 = *puVar2;
      if (uVar5 != *puVar1) {
        return uVar5;
      }
      do {
        iVar6 = iVar6 + 4;
        if (-1 < iVar6) {
          return 0;
        }
        uVar5 = *(uint *)(iVar6 + (int)puVar2);
      } while (uVar5 == *(uint *)(iVar6 + (int)puVar1));
      return uVar5;
    }
  }
  bVar10 = 0;
  bVar13 = SBORROW1(cVar3,'\x01');
  bVar11 = cVar4 < '\0';
  bVar9 = (POPCOUNT(cVar4) & 1U) == 0;
  bVar8 = cVar3 == '\0';
  local_4 = 0;
  uStack_2 = 0;
  FUN_004083e8(&local_4,uVar7);
  FUN_00407a5c(uVar5,CONCAT22(uStack_2,local_4));
  iVar6 = CONCAT22(uStack_2,local_4);
  uStack_2 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(bVar13 & 1) * 0x800 |
             (ushort)(bVar12 & 1) * 0x400 | (ushort)(in_IF & 1) * 0x200 |
             (ushort)(in_TF & 1) * 0x100 | (ushort)(bVar11 & 1) * 0x80 | (ushort)(bVar10 & 1) * 0x40
             | (ushort)(in_AF & 1) * 0x10 | (ushort)(bVar9 & 1) * 4 | (ushort)(bVar8 & 1);
  local_4 = 0x40;
  uVar5 = FUN_00404340(iVar6 + -0xc);
  return uVar5;
}

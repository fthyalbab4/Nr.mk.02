// rea decompile_all
// name: FUN_0040891c
// address: 0x40891c
// body: available
// range: 0x40891c-0x408980 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040891c(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte in_AF;
  byte bVar8;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte bVar11;
  byte in_NT;
  undefined2 local_4;
  ushort uStack_2;

  bVar10 = 0;
  if ((param_1 != param_2) && (((param_1 & param_2) != 0 || ((param_1 != 0 && (param_2 != 0)))))) {
    bVar6 = *(byte *)(param_1 - 10);
    cVar2 = bVar6 - 2;
    uVar3 = param_2;
    uVar5 = param_1;
    if (cVar2 == '\0') {
      bVar6 = *(byte *)(param_2 - 10);
      cVar2 = bVar6 - 2;
      uVar3 = param_1;
      uVar5 = param_2;
      if (cVar2 == '\0') {
        iVar1 = *(int *)(param_1 - 4);
        if (iVar1 != *(int *)(param_2 - 4)) {
          return param_1;
        }
        param_1 = param_1 + iVar1 * 2;
        iVar4 = iVar1 * -2;
        do {
          if (*(int *)(iVar4 + param_1) != *(int *)(iVar4 + param_2 + iVar1 * 2)) {
            return param_1;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0);
        return 0;
      }
    }
    bVar8 = 0;
    bVar11 = SBORROW1(bVar6,'\x02');
    bVar9 = cVar2 < '\0';
    bVar7 = (POPCOUNT(cVar2) & 1U) == 0;
    bVar6 = bVar6 < 2;
    local_4 = 0;
    uStack_2 = 0;
    FUN_004083c0(&local_4,uVar5);
    FUN_0040891c(uVar3,CONCAT22(uStack_2,local_4));
    iVar1 = CONCAT22(uStack_2,local_4);
    uStack_2 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(bVar11 & 1) * 0x800 |
               (ushort)(bVar10 & 1) * 0x400 | (ushort)(in_IF & 1) * 0x200 |
               (ushort)(in_TF & 1) * 0x100 | (ushort)(bVar9 & 1) * 0x80 | (ushort)(bVar8 & 1) * 0x40
               | (ushort)(in_AF & 1) * 0x10 | (ushort)(bVar7 & 1) * 4 | (ushort)(bVar6 & 1);
    local_4 = 0x40;
    uVar3 = FUN_00404340(iVar1 + -0xc);
    return uVar3;
  }
  return param_1;
}
